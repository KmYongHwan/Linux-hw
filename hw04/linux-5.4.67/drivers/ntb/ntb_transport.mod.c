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
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x50824d0b, "ntb_msi_peer_trigger" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xf48c92ea, "dmaengine_unmap_put" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x785dd9f2, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2dff943a, "dmaengine_get_unmap_data" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x9f7a164c, "dma_sync_wait" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5a921311, "strncmp" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xaa2f428f, "ntb_unregister_client" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9edd8762, "dma_direct_map_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa8ed36de, "ntb_msi_init" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb6318a6f, "ntbm_msi_request_threaded_irq" },
	{ 0xa7b12150, "ntb_msi_setup_mws" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b9ab854, "ntb_default_peer_port_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x95c144a, "__ntb_register_client" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe68b2f71, "__dma_request_channel" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x84972054, "param_ops_byte" },
	{ 0x318de333, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x39346a1f, "ntb_clear_ctx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x91c43db3, "ntb_link_event" },
	{ 0xa637b975, "dma_ops" },
	{ 0x76cfe15e, "ntb_set_ctx" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "0B266B7C7CE6B6E7F86D619");
