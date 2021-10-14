#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xb2486100, "snd_emux_new" },
	{ 0xd15be20d, "snd_emu10k1_synth_alloc" },
	{ 0x22aa9ef6, "snd_emux_register" },
	{ 0xc4fd854a, "snd_emu10k1_memblk_map" },
	{ 0xe9f1b664, "snd_emu10k1_voice_alloc" },
	{ 0xa915c624, "__snd_seq_driver_register" },
	{ 0xf9e827fe, "snd_emu10k1_synth_bzero" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x56f697, "snd_emux_free" },
	{ 0xe6b5f46d, "snd_emu10k1_ptr_write" },
	{ 0x404e66ac, "snd_emu10k1_synth_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x36668f7a, "snd_emu10k1_voice_free" },
	{ 0x47143fc2, "snd_emu10k1_synth_copy_from_user" },
	{ 0xe893700d, "snd_emu10k1_ptr_read" },
	{ 0x87ba86ce, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-emux-synth,snd-emu10k1,snd-seq-device");


MODULE_INFO(srcversion, "B9A37584DA2A60C8E54AFEE");
