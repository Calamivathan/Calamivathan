module.exports = {
    name: 'resume',
    aliases: ['rs'],
    utilisation: '{prefix}resume',
    voiceChannel: true,

    execute(client, message) {
        const queue = player.getQueue(message.guild.id);

        if (!queue) return message.channel.send(`Koi music play nahi ho raha abhi :) play crow piliz ${message.author}... try again ? ❌`);

        const success = queue.setPaused(false);

        return message.channel.send(success ? `Current music ${queue.current.title} resume kar diya :) meri jaan ✅` : `Something went wrong ${message.author}... try again ? ❌`);
    },
};