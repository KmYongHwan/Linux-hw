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
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xcdfd2681, "snd_dma_alloc_pages" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc4142837, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x91591ee3, "snd_ctl_boolean_stereo_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x65523885, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x5edd2a6c, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xc06eefaf, "snd_pcm_set_sync" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xede283d, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd,snd-pcm");

MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B321bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B401bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B601bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B701bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B421bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B621bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B721bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D321bc*sc*i*");

MODULE_INFO(srcversion, "67FC10095AF35BB7CBA727D");
