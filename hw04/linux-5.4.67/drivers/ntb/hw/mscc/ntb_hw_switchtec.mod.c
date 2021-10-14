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
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xd98f8549, "class_interface_unregister" },
	{ 0xbc3b6516, "class_interface_register" },
	{ 0x59a4d0f7, "switchtec_class" },
	{ 0x15d91d68, "pci_iomap_range" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xee6c0980, "ntb_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xfb578fc5, "memset" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x91c43db3, "ntb_link_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf10de535, "ioread8" },
	{ 0xafd9421f, "ntb_db_event" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4cdc35fc, "ntb_unregister_device" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "switchtec,ntb");


MODULE_INFO(srcversion, "D763E46C4D5F87944B2EC3D");
