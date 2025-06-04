import fetch from 'node-fetch';

export default async function handler(req, res) {
  try {
    const response = await fetch('https://www.pbinfo.ro/profil/23ovii/probleme');
    const html = await response.text();

    const solvedMatch = html.match(/>(\d+)\s+probleme rezolvate<\/a>/i);
    const solved = solvedMatch ? parseInt(solvedMatch[1]) : 0;

    res.setHeader('Content-Type', 'application/json');
    res.status(200).json({
      schemaVersion: 1,
      label: 'Solved',
      message: solved.toString(),
      color: '9A3412',
      logo: 'rocket',
    });
  } catch (error) {
    console.error('Error fetching pbinfo:', error);
    res.status(500).json({ error: 'Failed to fetch data' });
  }
}
