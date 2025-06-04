export default function handler(req, res) {
  res.writeHead(307, { Location: 'https://github.com/23ovii/pbinfo.ro' });
  res.end();
}