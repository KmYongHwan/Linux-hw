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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xe995c512, "vchan_tx_submit" },
	{ 0xb8656bce, "vchan_find_desc" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x87b8798d, "sg_next" },
	{ 0xec4b7ee9, "dma_async_tx_descriptor_init" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a56d877, "dma_async_device_register" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7bf29cd, "get_cached_msi_msg" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x63896da4, "vchan_tx_desc_free" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xefce1a63, "debugfs_create_file_unsafe" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5c344b83, "debugfs_create_u16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77738a68, "dma_async_device_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0x2196871a, "vchan_init" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "virt-dma");


MODULE_INFO(srcversion, "AD10D2181AE4330ED0773A6");
