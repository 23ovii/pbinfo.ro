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
      label: 'Problems Solved',
      message: solvedNumber,
      color: '9A3412',
      logo: 'rocket'
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
