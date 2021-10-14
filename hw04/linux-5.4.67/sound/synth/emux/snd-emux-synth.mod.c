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
	{ 0x7d95566f, "snd_util_mem_avail" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf8c165a, "snd_device_register" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x121aadbf, "snd_device_free" },
	{ 0x6587202e, "snd_info_create_card_entry" },
	{ 0xc4142837, "seq_printf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x74952d0d, "snd_seq_create_kernel_client" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0x201e44f1, "snd_hwdep_new" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf720a60b, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x833a3e07, "snd_midi_channel_set_clear" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x66cf9a80, "snd_info_free_entry" },
	{ 0xf0b1f6e8, "snd_virmidi_new" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xc6ac42dd, "snd_seq_event_port_attach" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi");


MODULE_INFO(srcversion, "48059F52A9AD9FF6C9F0B5A");
