const axios = require('axios');
const cheerio = require('cheerio');

module.exports = async (req, res) => {
  try {
    const { data } = await axios.get('https://www.pbinfo.ro/profil/23ovii/probleme', {
      headers: {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36',
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Language': 'en-US,en;q=0.5',
        'Accept-Encoding': 'gzip, deflate, br',
        'Connection': 'keep-alive',
        'Upgrade-Insecure-Requests': '1',
        'Sec-Fetch-Dest': 'document',
        'Sec-Fetch-Mode': 'navigate',
        'Sec-Fetch-Site': 'none',
        'Cache-Control': 'max-age=0'
      }
    });
    
    const $ = cheerio.load(data);
    const solvedText = $('a[href="/profil/23ovii/probleme"]').text();
    const solvedNumber = solvedText.match(/\d+/)?.[0] || '0';
    
    res.setHeader('Content-Type', 'application/json');
    res.status(200).json({
      schemaVersion: 1,
      label: "Problems Solved",
      message: `${solvedNumber}`,
      color: "007ACC",
      labelColor: "4B4B4B"
    });
  } catch (err) {
    console.error(err);
    res.status(500).json({
      label: 'Problems Solved',
      message: 'error',
      color: 'red'
    });
  }
};
