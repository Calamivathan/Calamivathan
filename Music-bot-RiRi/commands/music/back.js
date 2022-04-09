module.exports = {
    name: 'back',
    aliases: ['previous'],
    utilisation: '{prefix}back',
    voiceChannel: true,

    async execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        if (!queue.previousTracks[1]) return message.channel.send(`Isse phele koi gaana nahi chal raha tha :) ${message.author}... try again ? ❌`);

        await queue.back();

        message.channel.send(`**previous** track chala diya maine :) ✅`);
    },
};