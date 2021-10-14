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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbe32b13b, "sysfs_create_files" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xc9945da4, "set_page_dirty" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x88e96942, "device_create" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcede1db4, "get_user_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8c4b26, "sysfs_remove_files" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xee3124a4, "sg_alloc_table_from_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x66414bc7, "__class_create" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3fa55769, "__put_page" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C7B55565C76C54E4322CF84");
