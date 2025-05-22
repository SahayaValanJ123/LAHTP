#!/bin/bash

# Recon Script for vvcoe.org by SahayaValan

TARGET="vvcoe.org"
WORDLIST="/usr/share/wordlists/dirb/common.txt"
SUBDOMAIN_LIST="subs.txt"

echo "============================="
echo "  Starting Recon on $TARGET  "
echo "============================="

# WHOIS Lookup
echo -e "\n[+] WHOIS Information:"
whois $TARGET | grep -E "Domain Name|Registrar|Creation Date|Expiry Date|Name Server"

# DNS Records
echo -e "\n[+] DNS Records:"
dig $TARGET any +short

# Subdomain Enumeration (Passive with assetfinder)
echo -e "\n[+] Subdomains (Passive - assetfinder):"
assetfinder --subs-only $TARGET | tee -a $SUBDOMAIN_LIST

# Nmap Port and Service Scan
echo -e "\n[+] Nmap Scan:"
nmap -sV -T4 -Pn $TARGET

# Directory Bruteforce
echo -e "\n[+] Directory Bruteforce (dirb):"
dirb http://$TARGET $WORDLIST

# Banner Grabbing (Port 80)
echo -e "\n[+] Banner Grabbing (HTTP Port 80):"
echo -e "HEAD / HTTP/1.0\n\n" | nc $TARGET 80

echo -e "\n[+] Recon Completed."
echo "Results saved to $SUBDOMAIN_LIST"
