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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6ea09972, "snd_midi_channel_alloc_set" },
	{ 0x6c57f0bf, "snd_opl3_reset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb9948d2c, "snd_midi_channel_free_set" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x74952d0d, "snd_seq_create_kernel_client" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa915c624, "__snd_seq_driver_register" },
	{ 0xb64afdb2, "snd_opl3_find_patch" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf720a60b, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5060a19, "snd_opl3_regmap" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xc6ac42dd, "snd_seq_event_port_attach" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x87ba86ce, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-seq-midi-emul,snd-opl3-lib,snd-seq,snd-seq-device");


MODULE_INFO(srcversion, "C414003CA088F25B355C586");
