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
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa0ec7d73, "cx18_ext_init" },
	{ 0x999e8297, "vfree" },
	{ 0xf6361297, "snd_pcm_stream_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x16a4b639, "cx18_stop_v4l2_encode_stream" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa272007b, "cx18_release_stream" },
	{ 0x8d2a68ae, "cx18_claim_stream" },
	{ 0xc5850110, "printk" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x65523885, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x44bd8791, "snd_pcm_stream_unlock" },
	{ 0x2c0d31c4, "cx18_start_v4l2_encode_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xc3d38a82, "driver_find" },
};

MODULE_INFO(depends, "snd-pcm,cx18,snd");


MODULE_INFO(srcversion, "22F631425933D2E68939F37");
