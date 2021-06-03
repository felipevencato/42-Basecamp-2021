#!/bin/bash
echo -e "#!/bin/sh\ngit ls-files -oi --exclude-standard" > git_ignore.sh
./git_ignore.sh
