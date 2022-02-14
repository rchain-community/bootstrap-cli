# bootstrap-cli
Bootstrap CLI gives an extensive set of CLI commands useful for setting up, configuring and managing rnode processes, reading from and deploying contracts to the RChain network.

## Setup 
- Clone the repository
- Install node modules using NPM or Yarn

## Folders
- ``cli-scripts`` - Provides commands which are useful and necessary to deploy rholang smart contracts to RChain local network. Support for other networks and custom networks are coming soon. You also have propose and propose with interval scripts for making proposes and creating blocks on your local node.
- ``cli-utils`` - These are reusable modular scripts that can support only the CLI, support for modular interface scripts are coming soon.
- ``master-dictionary-setup`` - These are scripts that help you create a master dictionary, deploy rchain core contracts and add custom contracts such as the RChain Governance standard contracts.

## General Usage
- ``cd src/cli-scripts`` - change directory into cli-scripts.
- ``node run-rnode.js`` - starts up an local rnode process, you can view the rnode log by using the command ``tail -f ../log/run-rnode.log``.
- ``node check-rnode.js`` - use this to check if an rnode process is running, this returns the PID of the running rnode.
- ``node stop-rnode.js`` - kills a running rnode process.
- ``node create-snapshot.js`` - creates a .tgz snapshot of the rnode datastore (tuplespace).
- ``node restore-snapshot.js`` - restores an rnode datastore.
- ``node deploy.js path-to-contract-file`` - deploys a rholang contract to a running rnode process. The target rnode must be running. This does not output a result.
- ``node easy-deploy.js path-to-contract-file`` - deploys a rholang contract to a running rnode process. The target rnode must be running. This returns an output. Porpose is required for this to finish.
- ``node explore.js path-to-contract-file`` - evaluates a piece of rholang code and returns a result. The target rnode must be running.
- ``node propose.js`` - use this to make a propose to a running rnode.
- ``node 5-sec-propose.js`` - lets you run an automated propose that happes after every 5 seconds.

## Master Dictionary Setup
- ``cd src/master-dictionary-setup`` - change directory into master-dictionary-setup.
- ``node clone-rchain-core.js`` - downloads the rchain repository from github.
- ``node deploy-rchain-core.js`` - deploys all core rholang contracts in the rchain directory.
- ``node deploy-master-dictionary.js`` - creates a master directory/dictionary.
- ``node deploy-rgov-contracts.js`` - deploys rgovs standard rholang contracts and creates 'generated' directory.
- ``node update-master-dictionary.js`` - adds the deployed rgov standard rholang contracts to the master dictionary.
 
