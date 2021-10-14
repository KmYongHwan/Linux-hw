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
	{ 0x752832c, "noop_llseek" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x66414bc7, "__class_create" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc5399abe, "cdev_del" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x88e96942, "device_create" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x40748904, "cdev_init" },
	{ 0xf10de535, "ioread8" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x15d91d68, "pci_iomap_range" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003307sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "22E5DD568C0F3A3D31DB675");
