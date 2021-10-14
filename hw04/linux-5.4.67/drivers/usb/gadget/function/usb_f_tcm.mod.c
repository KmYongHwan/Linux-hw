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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a7ba3f3, "usb_ep_autoconfig_ss" },
	{ 0x7a43b97e, "usb_gstrings_attach" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0x9989b06a, "core_tpg_register" },
	{ 0x311906ab, "transport_generic_free_cmd" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x5744cd3e, "configfs_undepend_item" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xd301c59e, "target_register_template" },
	{ 0xf14f2bdc, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x1f786569, "target_submit_cmd" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7698059, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0xb6a4642a, "target_remove_session" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x9062426e, "usb_composite_setup_continue" },
	{ 0xf720a60b, "module_put" },
	{ 0x14856e3a, "target_setup_session" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x5e08bd7b, "transport_send_check_condition_and_sense" },
	{ 0x575edfc, "target_unregister_template" },
	{ 0xa89ca020, "transport_init_se_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4efb61ad, "configfs_depend_item_unlocked" },
	{ 0xd3b0e023, "usb_assign_descriptors" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0xef30deac, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "libcomposite,udc-core,target_core_mod");


MODULE_INFO(srcversion, "6CB2DDDF56C3AB43C91F61E");
