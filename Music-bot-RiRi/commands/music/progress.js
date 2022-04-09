module.exports = {
    name: 'progress',
    aliases: ['pbar'],
    utilisation: '{prefix}progress',
    voiceChannel: true,

    async execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        const progress = queue.createProgressBar();
        const timestamp = queue.getPlayerTimestamp();

        if (timestamp.progress == 'Infinity') return message.channel.send(`Live play kar raha hu kuch h nahi display karne k liye Baby :) 🎧`);

        message.channel.send(`${progress} (**${timestamp.progress}**%)`);
    },
};