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
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0xf0de439, "snd_mpu401_uart_new" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0x5ada0011, "input_event" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x4131670b, "snd_pcm_hw_constraint_pow2" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xf3373ad0, "__gameport_register_port" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xacc21c79, "snd_ac97_suspend" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe15f5c67, "gameport_unregister_port" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x5edd2a6c, "snd_dma_free_pages" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xc1a40a6a, "snd_dma_alloc_pages_fallback" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe17dcab, "snd_ac97_bus" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9afcdd42, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6ebc2d2, "snd_tea575x_init" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1460456f, "snd_tea575x_exit" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27ad78fd, "snd_ac97_resume" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x550051c6, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,videodev,snd-mpu401-uart,snd,gameport,snd-ac97-codec,tea575x");

MODULE_ALIAS("pci:v00001285d00000100sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001968sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001978sv*sd*bc04sc01i*");

MODULE_INFO(srcversion, "621A3CF6A5C6BA4C8E3B494");
