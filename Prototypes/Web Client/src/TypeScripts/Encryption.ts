// Common.js and ECMAScript Modules (ESM)
import * as ed from '@noble/ed25519';
// If you're using single file, use global variable instead: `window.nobleEd25519`

(async () => {
  // keys, messages & other inputs can be Uint8Arrays or hex strings
  // Uint8Array.from([0xde, 0xad, 0xbe, 0xef]) === 'deadbeef'
  const privateKey = ed.utils.randomPrivateKey();
  const message = Uint8Array.from([0xab, 0xbc, 0xcd, 0xde]);
  const publicKey = await ed.getPublicKey(privateKey);
  const signature = await ed.sign(message, privateKey);
  const isValid = await ed.verify(signature, message, publicKey);
})();


function GenerateKeyPair()
{
    
}

