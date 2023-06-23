id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"
OR
groups $FT_USER | tr ' ' ','
