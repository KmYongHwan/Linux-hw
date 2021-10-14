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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0xc2624ea0, "xenbus_frontend_closed" },
	{ 0xc4b49901, "p9_client_cb" },
	{ 0x3b567ab7, "v9fs_unregister_trans" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4b931968, "xen_features" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x284b2c82, "v9fs_register_trans" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcaf5712c, "p9_tag_lookup" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x660da6df, "xenbus_free_evtchn" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x11bd243d, "xenbus_unregister_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x7bc892bb, "__xenbus_register_frontend" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x37cdc9bb, "xenbus_alloc_evtchn" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x585997f1, "xenbus_switch_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x15b225b8, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6c36e95b, "p9_req_put" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "9pnet");


MODULE_INFO(srcversion, "07574449779C07712471F59");
