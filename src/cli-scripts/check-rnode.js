#!/usr/bin/env node

/* eslint-disable */
const { checkRnode } = require('../cli-utils/check-rnode-script');
const ALLNETWORKS = require('../cli-utils/networks-script');

async function main () {
  // TODO: allow user to specify network on the command line
  const pid = await checkRnode(ALLNETWORKS, 'localhost');

  // TODO: allow user to specify --quiet to suppress the console output
  if (pid == 0) {
    console.log("rnode is not running. Use run-rnode to start");
    return;
  } else {
    console.log(`rnode is running as PID ${pid}. Use stop-rnode to stop`);
    return;
  }
}

main();