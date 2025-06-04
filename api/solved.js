// api/solved.js

import axios from 'axios';
import cheerio from 'cheerio';

export default async function handler(req, res) {
  try {
    // 1. Fetch the profile page HTML
    const response = await axios.get('https://www.pbinfo.ro/profil/23ovii/probleme');

    // 2. Load the HTML into cheerio (jQuery-like)
    const $ = cheerio.load(response.data);

    // 3. Extract the solved problems count
    // Based on the HTML snippet you gave:
    // <a href="/profil/23ovii/probleme">104 probleme rezolvate</a>
    const solvedText = $('a[href="/profil/23ovii/probleme"]').text();
    // solvedText example: "104 probleme rezolvate"

    // Extract the number from the text
    const solvedNumber = solvedText.match(/\d+/)[0]; // "104"

    // 4. Return JSON for Shields.io badge
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
