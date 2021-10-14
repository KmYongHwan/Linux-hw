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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xafd0db4b, "tm6000_unregister_extension" },
	{ 0x9a27f87, "tm6000_register_extension" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xd275a703, "tm6000_set_audio_bitrate" },
	{ 0xe7c88864, "tm6000_set_reg_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x83f119f4, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65523885, "snd_card_new" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x4131670b, "snd_pcm_hw_constraint_pow2" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x68a57338, "snd_card_free" },
	{ 0xc5850110, "printk" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x44bd8791, "snd_pcm_stream_unlock" },
	{ 0xf6361297, "snd_pcm_stream_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,tm6000,snd");


MODULE_INFO(srcversion, "94EB9BD787CDDDCD227B682");
