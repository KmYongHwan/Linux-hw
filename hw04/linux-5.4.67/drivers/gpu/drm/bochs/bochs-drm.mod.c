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
	{ 0x42595e58, "vgacon_text_force" },
	{ 0xc344af18, "drm_release" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf088322, "drm_dev_register" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xda52bfc8, "drm_dev_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x98843005, "drm_mode_config_helper_resume" },
	{ 0xe5de8feb, "drm_vram_mm_file_operations_mmap" },
	{ 0xe44eee50, "drm_mode_config_cleanup" },
	{ 0xc13006f, "drm_vram_helper_release_mm" },
	{ 0x52cca85c, "drm_mode_config_reset" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0x4b98514a, "drm_set_preferred_mode" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x6f53da0e, "remove_conflicting_pci_framebuffers" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x181145c0, "drm_gem_vram_mm_funcs" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x8202735c, "drm_do_get_edid" },
	{ 0xd73bff89, "drm_simple_display_pipe_init" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x297fa670, "drm_fbdev_generic_setup" },
	{ 0x4d0310f0, "drm_connector_attach_edid_property" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x9a884d5f, "drm_helper_connector_dpms" },
	{ 0xca161191, "drm_dev_put" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x5482e4ac, "drm_dev_unregister" },
	{ 0x328b4a73, "drm_gem_vram_pin" },
	{ 0xc5850110, "printk" },
	{ 0xfef0539a, "drm_gem_fb_create" },
	{ 0xb245c251, "drm_read" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0x82b04ebf, "drm_gem_vram_driver_dumb_mmap_offset" },
	{ 0x72add5d0, "vga_remove_vgacon" },
	{ 0xb5d73ab5, "drm_mode_config_helper_suspend" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x44403596, "drm_connector_init" },
	{ 0x53b398bd, "drm_gem_vram_unpin" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x958579ef, "drm_atomic_helper_check" },
	{ 0x7e94ed1, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1449451d, "drm_crtc_send_vblank_event" },
	{ 0x7b71eb, "drm_add_modes_noedid" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xeb667e56, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x7934c628, "drm_atomic_helper_shutdown" },
	{ 0x9b281506, "drm_vram_helper_alloc_mm" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x55e801ae, "drm_gem_prime_mmap" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x47c910e1, "drm_gem_vram_driver_dumb_create" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xcdc40c6e, "drm_open" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,drm_vram_helper");

MODULE_ALIAS("pci:v00001234d00001111sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001234d00001111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "588F7631D99E87406C42AC5");
