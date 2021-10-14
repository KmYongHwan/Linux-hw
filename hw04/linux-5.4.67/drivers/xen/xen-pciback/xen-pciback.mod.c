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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d269b6f, "unregister_xenbus_watch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7ce210e0, "xenbus_map_ring_valloc" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x919dade8, "device_release_driver" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x870e16b7, "xen_test_irq_shared" },
	{ 0xabfae44a, "xenbus_dev_is_online" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0xeeb6dd6, "pci_load_and_free_saved_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xffe0104d, "xenbus_unmap_ring_vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x4ea17f46, "xenbus_watch_path" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc6b46a81, "pci_store_saved_state" },
	{ 0x4159c7f8, "__xenbus_register_backend" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x11bd243d, "xenbus_unregister_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x55bb0f5c, "xen_register_device_domain_owner" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x77c0fa4, "xen_find_device_domain_owner" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4b9369e2, "pci_load_saved_state" },
	{ 0xce807a25, "up_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x58750a89, "__pci_reset_function_locked" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0xa452f2a4, "xen_pirq_from_irq" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0xb871c87f, "pci_set_mwi" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x438e6a40, "bus_register_notifier" },
	{ 0x2a717b8a, "xen_unregister_device_domain_owner" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b04668e, "bind_interdomain_evtchn_to_irqhandler" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x585997f1, "xenbus_switch_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0xd2b13065, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x15b225b8, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x5771e9ba, "bus_unregister_notifier" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "30302D3A5595F47B5A474A9");
