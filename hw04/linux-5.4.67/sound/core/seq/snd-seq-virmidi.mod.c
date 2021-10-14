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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xbb9a39, "snd_rawmidi_proceed" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x121aadbf, "snd_device_free" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x74952d0d, "snd_seq_create_kernel_client" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf720a60b, "module_put" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-seq-midi-event,snd-seq,snd");


MODULE_INFO(srcversion, "778E66E20BB331CEE6ADFA8");
