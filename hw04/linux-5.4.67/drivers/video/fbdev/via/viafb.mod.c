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
	{ 0xf9a482f9, "msleep" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x70691c99, "single_open" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6513a3fa, "fb_get_color_depth" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x6168380e, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0xa5558b7d, "proc_create" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v00001106d00003122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003225sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003230sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00001122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007122sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "87081C221D5CD43CC991D98");
