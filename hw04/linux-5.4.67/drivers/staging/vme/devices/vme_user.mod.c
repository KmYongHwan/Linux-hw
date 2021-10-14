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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xe4774656, "vme_unregister_driver" },
	{ 0x794aa971, "vme_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x88e96942, "device_create" },
	{ 0x66414bc7, "__class_create" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x95c54ce5, "vme_master_request" },
	{ 0x188cd88, "vme_alloc_consistent" },
	{ 0x86e5f503, "vme_slave_request" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x2bdb9d00, "cdev_alloc" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6bdc3f, "vme_master_read" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb30b9822, "vme_master_set" },
	{ 0x8a6025ce, "vme_irq_generate" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2a9a3905, "vme_master_get" },
	{ 0x902d8722, "vme_slave_get" },
	{ 0x52983a4f, "vme_master_write" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf6c6462, "vme_slot_num" },
	{ 0x76ed5b1d, "vme_bus_num" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3c13f7b2, "vme_master_mmap" },
	{ 0xcfd7e756, "fixed_size_llseek" },
	{ 0x79a33f85, "vme_get_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xdff905e5, "vme_slave_free" },
	{ 0x1bd59dbe, "vme_free_consistent" },
	{ 0x3fbf3c89, "vme_slave_set" },
	{ 0x7cf35220, "vme_master_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "58EAC5D6FCE24510A6456C9");
