module.exports = {
    name: 'shuffle',
    aliases: ['sh'],
    utilisation: '{prefix}shuffle',
    voiceChannel: true,

    async execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        if (!queue.tracks[0]) return message.channel.send(`Koi music nahi h queue m :) ${message.author}... try again ? ❌`);

        await queue.shuffle();

        return message.channel.send(`Queue shuffled **${queue.tracks.length}** song(s) ! ✅`);
    },
};