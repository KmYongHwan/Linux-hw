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
	{ 0xc373a5d1, "no_llseek" },
	{ 0xb2b0274a, "show_class_attr_string" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xb53fa73a, "class_remove_file_ns" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa05dafb8, "class_create_file_ns" },
	{ 0x66414bc7, "__class_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x88e96942, "device_create" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x40748904, "cdev_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xf5cb9fdc, "nonseekable_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5399abe, "cdev_del" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00009050bc06sc80i*");

MODULE_INFO(srcversion, "2A8B2E9E455C502B2DB4427");
