for ip in  192.168.186.{1..254}
    do
	ping -c 1 $ip | grep "64 bytes" &> /dev/null && echo "Active : $ip"
    done
$ps aux | grep "lan.sh"
