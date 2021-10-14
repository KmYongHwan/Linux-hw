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
	{ 0x6ac36405, "phy_init" },
	{ 0xfacd5b06, "usb_gadget_unmap_request_by_dev" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2613feee, "usb_gadget_map_request_by_dev" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x2d934d86, "device_property_read_u16_array" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc5c362ec, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdf1dd53b, "usb_gadget_set_state" },
	{ 0x9fdface3, "usb_role_switch_register" },
	{ 0x726e8b16, "phy_power_off" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xde843921, "usb_gadget_udc_reset" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x63fd46c1, "phy_power_on" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xe1e17a9d, "phy_reset" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc645475b, "phy_exit" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xc6cc19a0, "usb_get_maximum_speed" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x6c5b4cf1, "usb_get_dr_mode" },
	{ 0x4531624f, "usb_decode_ctrl" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "527ED830CF109632357F2EB");
