module.exports = {
    name: 'pause',
    aliases: [],
    utilisation: '{prefix}pause',
    voiceChannel: true,

    execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        const success = queue.setPaused(true);

        return message.channel.send(success ? `Current music ${queue.current.title} pause kar diya :) ✅` : `Something went wrong ${message.author}... try again ? ❌`);
    },
};