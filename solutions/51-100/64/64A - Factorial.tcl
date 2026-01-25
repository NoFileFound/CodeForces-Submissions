gets stdin n

array set dp {}
set dp(1) 1
set dp(2) 2
for {set i 3} {$i <= $n} {incr i} {
    set dp($i) [expr {$dp([expr {$i - 1}]) * $i}]
}

puts $dp($n)