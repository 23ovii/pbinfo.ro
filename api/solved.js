// /api/solved.js

const axios = require('axios');
const cheerio = require('cheerio');

module.exports = async (req, res) => {
  try {
    const { data } = await axios.get('https://www.pbinfo.ro/profil/23ovii/probleme');
    const $ = cheerio.load(data);

    const solvedText = $('a[href="/profil/23ovii/probleme"]').text();
    const solvedNumber = solvedText.match(/\d+/)?.[0] || '0';

    res.setHeader('Content-Type', 'application/json');
    res.status(200).json({
      schemaVersion: 1,
      label: 'Problems Solved',
      message: solvedNumber + " 🚀", 
      color: '7B2E0C',
      labelColor: 'B15A0F',
      style: 'for-the-badge'
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
