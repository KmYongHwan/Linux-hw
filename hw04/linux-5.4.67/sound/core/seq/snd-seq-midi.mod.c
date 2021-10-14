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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc7a3a1bf, "snd_rawmidi_kernel_release" },
	{ 0x74952d0d, "snd_seq_create_kernel_client" },
	{ 0x2c2e5bab, "snd_rawmidi_kernel_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0xb7841a20, "snd_rawmidi_input_params" },
	{ 0xa915c624, "__snd_seq_driver_register" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xc5850110, "printk" },
	{ 0x38ef5d9e, "snd_rawmidi_drain_output" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x8b7d3d79, "snd_rawmidi_kernel_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bda9a5d, "snd_rawmidi_kernel_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x424d2fe1, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x87ba86ce, "snd_seq_driver_unregister" },
	{ 0xe65cd5c7, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device");


MODULE_INFO(srcversion, "AD53094BDFCFEA672729D41");
