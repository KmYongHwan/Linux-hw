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
	{ 0x84972054, "param_ops_byte" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xaa2f428f, "ntb_unregister_client" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x95c144a, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x94c5b6ca, "ntb_default_port_number" },
	{ 0x7b9ab854, "ntb_default_peer_port_count" },
	{ 0xf9831958, "ntb_default_peer_port_number" },
	{ 0x66023a3a, "debugfs_create_bool" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x91c43db3, "ntb_link_event" },
	{ 0x76cfe15e, "ntb_set_ctx" },
	{ 0x27eeba99, "devm_ioremap_wc" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x318de333, "dma_release_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xe68b2f71, "__dma_request_channel" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xf48c92ea, "dmaengine_unmap_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2dff943a, "dmaengine_get_unmap_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x39346a1f, "ntb_clear_ctx" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "FF477ACFC5C8E79967B6505");
