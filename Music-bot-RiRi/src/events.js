player.on('error', (queue, error) => {
    console.log(`Error aagaya yr queue mai :) ${error.message}`);
});

player.on('connectionError', (queue, error) => {
    console.log(`Error aagaya yr connection mai :) ${error.message}`);
});

player.on('trackStart', (queue, track) => {
    if (!client.config.opt.loopMessage && queue.repeatMode !== 0) return;
    queue.metadata.send(`Chala diya ye song :) ${track.title} in **${queue.connection.channel.name}** 🎧`);
});

player.on('trackAdd', (queue, track) => {
    queue.metadata.send(`Ye gaana ${track.title} add kar diya queue mai :) ✅`);
});

player.on('botDisconnect', (queue) => {
    queue.metadata.send('Mujhe disconnect na crow piliz :), clearing queue... ❌');
});

player.on('channelEmpty', (queue) => {
    queue.metadata.send('Sab chale guye aisa na crow :), leaving the voice channel... ❌');
});

player.on('queueEnd', (queue) => {
    queue.metadata.send('Puri queue khatam kar di or add crow piliz :) ✅');
});