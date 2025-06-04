export default function handler(req, res) {
  res.writeHead(302, { Location: 'https://github.com/23ovii/pbinfo.ro' });
  res.end();
}
