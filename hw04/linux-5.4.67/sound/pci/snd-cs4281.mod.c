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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x13b376c9, "snd_opl3_hwdep_new" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x6587202e, "snd_info_create_card_entry" },
	{ 0xc4142837, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0x7d9923ef, "snd_opl3_init" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7bae87a, "snd_opl3_new" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xf3373ad0, "__gameport_register_port" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xe15f5c67, "gameport_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0x550051c6, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,snd,snd-rawmidi,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v00001013d00006005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "479D710F96231E385F67FE7");
