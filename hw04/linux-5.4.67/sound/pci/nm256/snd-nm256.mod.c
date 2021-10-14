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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xfffd89db, "copy_from_user_toio" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0x52333687, "snd_pci_quirk_lookup" },
	{ 0xbf18174f, "snd_pcm_lib_mmap_iomem" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-ac97-codec");

MODULE_ALIAS("pci:v000010C8d00008005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00008006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010C8d00008016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2FF7C2FDFC2BCEFA4ABD60E");
