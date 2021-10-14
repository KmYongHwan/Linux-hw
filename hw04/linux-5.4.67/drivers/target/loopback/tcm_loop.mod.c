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
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x575edfc, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xd301c59e, "target_register_template" },
	{ 0xf44a972b, "driver_register" },
	{ 0x35db28d0, "bus_register" },
	{ 0x74b6572, "__root_device_register" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x785dd9f2, "device_register" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x306e5760, "root_device_unregister" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x12a13bca, "target_submit_tmr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0xf14f2bdc, "core_tpg_deregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x14856e3a, "target_setup_session" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x754d539c, "strlen" },
	{ 0xb6a4642a, "target_remove_session" },
	{ 0x311906ab, "transport_generic_free_cmd" },
	{ 0xef30deac, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcfb55cfd, "target_submit_cmd_map_sgls" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x9989b06a, "core_tpg_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e0a8dc6, "core_allocate_nexus_loss_ua" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "D46B5163B23E91745F8E9FD");
