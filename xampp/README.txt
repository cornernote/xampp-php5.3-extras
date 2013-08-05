====================
XAMPP PHP 5.3 Extras
====================


--------------------
APC
--------------------

add to php.ini:
---
extension=php_apc.dll
[APC]
apc.enabled = 1
apc.shm_segments = 1
apc.shm_size = 64
apc.max_file_size = 10M
apc.stat = 1
---
