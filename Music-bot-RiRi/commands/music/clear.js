module.exports = {
    name: 'clear',
    aliases: ['cq'],
    utilisation: '{prefix}clear',
    voiceChannel: true,

    async execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        if (!queue.tracks[0]) return message.channel.send(`Iske baad koi music hai hi nahi queue mai :) ${message.author}... try again ? ❌`);

        await queue.clear();

        message.channel.send(`Clear kar di queue maine :) 🗑️`);
    },
};