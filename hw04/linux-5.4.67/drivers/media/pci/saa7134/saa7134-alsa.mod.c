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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x1211df5d, "saa7134_devlist" },
	{ 0xfee51625, "saa7134_dmasound_exit" },
	{ 0x1f6d7398, "saa7134_dmasound_init" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xb384607f, "snd_pcm_stop_xrun" },
	{ 0x15637077, "saa7134_set_dmabits" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x2b583535, "saa7134_pgtable_build" },
	{ 0x425d2135, "saa7134_pgtable_alloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x6b4facf1, "saa7134_pgtable_free" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65523885, "snd_card_new" },
	{ 0x999e8297, "vfree" },
	{ 0xc5850110, "printk" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c85d63e, "saa7134_tvaudio_setmute" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x61b4fd8f, "saa_dsp_writel" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x68a57338, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,saa7134,snd");


MODULE_INFO(srcversion, "609CD127C6CB9BD85FE93A0");
