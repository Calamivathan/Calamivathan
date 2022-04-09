module.exports = {
    name: 'skip',
    aliases: ['sk'],
    utilisation: '{prefix}skip',
    voiceChannel: true,

    execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue || !queue.playing) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        const success = queue.skip();

        return message.channel.send(success ? `Current music ${queue.current.title} skip kar diya :) ✅` : `Something went wrong ${message.author}... try again ? ❌`);
    },
};