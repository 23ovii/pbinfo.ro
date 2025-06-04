import axios from 'axios';
import cheerio from 'cheerio';

export default async function handler(req, res) {
  try {
    const response = await axios.get('https://www.pbinfo.ro/profil/23ovii/probleme');
    const $ = cheerio.load(response.data);

    const solvedText = $('a[href="/profil/23ovii/probleme"]').text();
    const solvedNumber = solvedText.match(/\d+/)[0];

    res.setHeader('Content-Type', 'application/json');
    res.status(200).json({
      label: 'Problems Solved',
      message: solvedNumber,
      color: '9A3412',
    });
  } catch (error) {
    res.status(500).json({
      label: 'Problems Solved',
      message: 'error',
      color: 'red',
    });
  }
}
