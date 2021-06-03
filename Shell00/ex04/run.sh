#!/bin/bash
echo -e "#!/bin/bash\ngit log --pretty=%H -5" > git_commit.sh
chmod +x git_commit.sh
./git_commit.sh
