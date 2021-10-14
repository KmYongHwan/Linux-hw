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
	{ 0x3528921c, "sdio_writeb" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0x35db28d0, "bus_register" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xa4b94fea, "iowrite8_rep" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x90f771ce, "sdio_writesb" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x8cc79cab, "iowrite16_rep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0x41b0e1e4, "_dev_emerg" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x762c19a9, "sdio_writel" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x785dd9f2, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x367b747d, "sdio_readl" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf441ac43, "ioread8_rep" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x70b56f47, "sdio_writew" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x21815954, "pci_prepare_to_sleep" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xcea1573d, "pci_back_from_sleep" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x52a8d2c0, "sdio_readw" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00004301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014A4d00004318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000A8D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004328sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004329sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000432Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004351sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "571863F88D3D9D6896EF515");
